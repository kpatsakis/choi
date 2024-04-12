void fun()
{
  int entity_1 = 21;
  char entity_2[6] = "";
  entity_2 = NULL;
  char entity_8 = 'N';
  char* entity_5;
  memset(entity_2, 'Z', 6-1);
  entity_2[6-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memcpy(entity_5, entity_2, 6*sizeof(char));
}