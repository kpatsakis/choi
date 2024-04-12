void fun()
{
  int entity_8 = 31;
  char* entity_2;
  char entity_3[entity_8] = "";
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'd', entity_8-1);
  entity_3[entity_8-1]='0';
  memcpy(entity_2, entity_3, entity_8*sizeof(char));
}