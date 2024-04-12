void fun()
{
  char* entity_5;
  char entity_8 = 'P';
  char* entity_1;
  char entity_4 = 'W';
  char entity_6[66] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  memset(entity_6, 'y', 66-1);
  entity_6[66-1]='';
  memcpy(entity_5, entity_6, 66*sizeof(char));
}