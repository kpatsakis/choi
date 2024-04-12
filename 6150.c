void fun()
{
  int entity_1 = 12;
  char* entity_9;
  char entity_0[66] = "";
  entity_0 = NULL;
  char entity_2 = 'v';
  char* entity_8;
  memset(entity_0, 'T', 66-1);
  entity_0[66-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  entity_1 = 18;
  strcpy(entity_8, entity_0);
}