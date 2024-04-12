void fun()
{
  int entity_4 = 30;
  int entity_5 = 59;
  int entity_8 = 46;
  entity_4 = 21;
  char* entity_7;
  char entity_9[90] = "";
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'o', 90-1);
  entity_9[90-1]='0';
  strcpy(entity_7, entity_9);
}