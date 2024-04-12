void fun()
{
  int entity_9 = 18;
  char entity_4[66] = "";
  char* entity_7;
  char entity_5 = 'o';
  memset(entity_4, 'U', 66-1);
  entity_4[66-1]='0';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}