void fun()
{
  char entity_3[44] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[10-1]='';
  memset(entity_3, 'W', 44-1);
  entity_3[44-1]='';
  memcpy(entity_1, entity_3, 44*sizeof(char));
}