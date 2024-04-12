void fun()
{
  int entity_7 = 8;
  char* entity_8;
  char* entity_6;
  char* entity_3;
  char entity_9[29] = "";
  entity_9 = NULL;
  memset(entity_9, 'm', 29-1);
  entity_9[29-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  entity_6 = (char*)malloc(87*sizeof(char));
  entity_6[87-1]='';
  entity_8 = (char*)malloc(82*sizeof(char));
  entity_8[82-1]='';
  entity_7 = 59;
  strcpy(entity_3, entity_9);
}