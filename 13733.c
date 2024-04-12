void fun()
{
  int entity_1 = 5;
  char* entity_3;
  char entity_7[entity_1] = "";
  memset(entity_7, 'b', entity_1-1);
  entity_7[entity_1-1]='0';
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[0]='0';
  entity_1 = 65;
  memcpy(entity_3, entity_7, entity_1*sizeof(char));
}