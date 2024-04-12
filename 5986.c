void fun()
{
  int entity_3 = 10;
  entity_3 = 53;
  char entity_7[3] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'D', 3-1);
  entity_7[3-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memcpy(entity_2, entity_7, 3*sizeof(char));
}