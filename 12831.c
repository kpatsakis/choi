void fun()
{
  int entity_9 = 61;
  char entity_0 = 'e';
  char entity_4[65] = "";
  char* entity_7;
  char* entity_3;
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[0]='0';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'u', 65-1);
  entity_4[65-1]='0';
  strcpy(entity_3, entity_4);
}