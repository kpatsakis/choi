void fun()
{
  int entity_7 = 49;
  int entity_5 = 49;
  char* entity_8;
  char entity_3[87] = "";
  char* entity_9;
  entity_8 = (char*)malloc(71*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'F', 87-1);
  entity_3[87-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 87*sizeof(char));
}