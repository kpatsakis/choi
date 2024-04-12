void fun()
{
  int entity_3 = 40;
  entity_3 = 97;
  char entity_1[entity_3] = "";
  char* entity_7;
  memset(entity_1, 'g', entity_3-1);
  entity_1[entity_3-1]='0';
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, entity_3*sizeof(char));
}