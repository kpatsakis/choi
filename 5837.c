void fun()
{
  char entity_3[13] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_8;
  char* entity_5;
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[34-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  memset(entity_3, 'F', 13-1);
  entity_3[13-1]='';
  strcpy(entity_9, entity_3);
}