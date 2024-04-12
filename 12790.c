void fun()
{
  int entity_6 = 54;
  char entity_3[entity_6] = "";
  char* entity_7;
  entity_7 = (char*)malloc(55*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'b', entity_6-1);
  entity_3[entity_6-1]='0';
  memcpy(entity_7, entity_3, entity_6*sizeof(char));
}