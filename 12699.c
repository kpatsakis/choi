void fun()
{
  int entity_6 = 23;
  char* entity_3;
  char entity_2[entity_6] = "";
  memset(entity_2, 'v', entity_6-1);
  entity_2[entity_6-1]='0';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, entity_6*sizeof(char));
}