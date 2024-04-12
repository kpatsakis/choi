void fun()
{
  int entity_4 = 65;
  entity_4 = 65;
  char* entity_6;
  char* entity_8;
  char entity_3[entity_4] = "";
  memset(entity_3, 'd', entity_4-1);
  entity_3[entity_4-1]='0';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}