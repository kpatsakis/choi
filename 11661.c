void fun()
{
  int entity_3 = 67;
  char entity_4[92] = "";
  char* entity_5;
  char* entity_7;
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'W', 92-1);
  entity_4[92-1]='0';
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}