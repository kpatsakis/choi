void fun()
{
  char entity_3[71] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memset(entity_3, 'P', 71-1);
  entity_3[71-1]='';
  memcpy(entity_7, entity_3, 71*sizeof(char));
}