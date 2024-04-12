void fun()
{
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[74-1]='';
  memset(entity_3, 'R', 17-1);
  entity_3[17-1]='';
  memcpy(entity_4, entity_3, 17*sizeof(char));
}