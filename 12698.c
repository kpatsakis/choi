void fun()
{
  int entity_2 = 78;
  int entity_5 = 26;
  char* entity_3;
  char* entity_6;
  char entity_9[100] = "";
  char entity_4[10] = "";
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'k', 10-1);
  entity_4[10-1]='0';
  memset(entity_9, 'N', 100-1);
  entity_9[100-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_9);
}