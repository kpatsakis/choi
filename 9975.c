void fun()
{
  int entity_1 = 4;
  int entity_9 = 99;
  char entity_4[66] = "";
  entity_4 = NULL;
  char entity_5[20] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_4, 'I', 66-1);
  entity_4[66-1]='';
  memset(entity_5, 'r', 20-1);
  entity_5[20-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  strcpy(entity_3, entity_5);
}