void fun()
{
  int entity_1 = 44;
  char* entity_3;
  char entity_2[entity_1] = "";
  memset(entity_2, 'J', entity_1-1);
  entity_2[entity_1-1]='0';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, entity_1*sizeof(char));
}