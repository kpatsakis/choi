void fun()
{
  char* entity_3;
  char entity_9[71] = "";
  entity_9 = NULL;
  char entity_7[9] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_5[86] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  memset(entity_5, 'r', 86-1);
  entity_5[86-1]='';
  memset(entity_9, 'D', 71-1);
  entity_9[71-1]='';
  memset(entity_7, 'o', 9-1);
  entity_7[9-1]='';
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  strcpy(entity_3, entity_5);
}