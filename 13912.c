void fun()
{
  int entity_9 = 45;
  char* entity_8;
  char entity_2[10] = "";
  char* entity_6;
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'Y', 10-1);
  entity_2[10-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  entity_9 = 80;
  strcpy(entity_6, entity_2);
}