void fun()
{
  int entity_4 = 25;
  int entity_1 = 37;
  char entity_7 = 'k';
  char* entity_0;
  char entity_9[66] = "";
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'g', 66-1);
  entity_9[66-1]='0';
  strcpy(entity_0, entity_9);
}