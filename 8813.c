void fun()
{
  int entity_5 = 13;
  entity_5 = 79;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'z', entity_5-1);
  entity_2[entity_5-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  memcpy(entity_3, entity_2, entity_5*sizeof(char));
}