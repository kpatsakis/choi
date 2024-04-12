void fun()
{
  int entity_6 = 63;
  entity_6 = 23;
  char* entity_5;
  char entity_2[58] = "";
  entity_2 = NULL;
  memset(entity_2, 'd', 58-1);
  entity_2[58-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memcpy(entity_5, entity_2, 58*sizeof(char));
}