void fun()
{
  int entity_6 = 98;
  entity_6 = 9;
  char entity_1[62] = "";
  char entity_7[32] = "";
  char* entity_2;
  memset(entity_1, 'j', 62-1);
  entity_1[62-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'I', 32-1);
  entity_7[32-1]='0';
  strcpy(entity_2, entity_1);
}