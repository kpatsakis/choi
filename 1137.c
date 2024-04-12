void fun()
{
  int entity_2 = 55;
  char* entity_1;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  memcpy(entity_1, entity_7, entity_2*sizeof(char));
}