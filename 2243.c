void fun()
{
  char entity_9[74] = "";
  entity_9 = NULL;
  char entity_4 = 's';
  char* entity_8;
  char* entity_3;
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[87-1]='';
  memset(entity_9, 'k', 74-1);
  entity_9[74-1]='';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  memcpy(entity_8, entity_9, 74*sizeof(char));
}