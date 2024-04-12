void fun()
{
  int entity_0 = 50;
  char* entity_1;
  char entity_3 = 'W';
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memset(entity_6, 'V', entity_0-1);
  entity_6[entity_0-1]='';
  entity_6[66] = 'O';
}