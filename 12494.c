void fun()
{
  int entity_8 = 97;
  char* entity_2;
  char entity_5[entity_8] = "";
  char* entity_3;
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'k', entity_8-1);
  entity_5[entity_8-1]='0';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, entity_8*sizeof(char));
}