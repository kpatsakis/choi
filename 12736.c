void fun()
{
  int entity_4 = 14;
  int entity_2 = 97;
  char entity_6[entity_2] = "";
  char* entity_8;
  char entity_3[14] = "";
  char* entity_7;
  memset(entity_6, 'D', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'I', 14-1);
  entity_3[14-1]='0';
  strcpy(entity_8, entity_6);
}