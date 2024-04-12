void fun()
{
  char* entity_7;
  char entity_6[100] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'v', 100-1);
  entity_6[100-1]='';
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  memcpy(entity_7, entity_6, 100*sizeof(char));
}