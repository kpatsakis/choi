void fun()
{
  char entity_5[95] = "";
  entity_5 = NULL;
  char entity_7 = 'i';
  char* entity_1;
  memset(entity_5, 'V', 95-1);
  entity_5[95-1]='';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  memcpy(entity_1, entity_5, 95*sizeof(char));
}