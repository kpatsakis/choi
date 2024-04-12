void fun()
{
  int entity_4 = 74;
  char* entity_1;
  char entity_3[17] = "";
  entity_3 = NULL;
  memset(entity_3, 'P', 17-1);
  entity_3[17-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memcpy(entity_1, entity_3, 17*sizeof(char));
}