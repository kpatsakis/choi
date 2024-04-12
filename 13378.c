void fun()
{
  int entity_7 = 92;
  entity_7 = 59;
  char* entity_5;
  char entity_3[69] = "";
  char* entity_1;
  memset(entity_3, 'N', 69-1);
  entity_3[69-1]='0';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_5, entity_3);
}