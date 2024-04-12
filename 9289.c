void fun()
{
  char* entity_8;
  char entity_3[51] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  memset(entity_3, 'y', 51-1);
  entity_3[51-1]='';
  memcpy(entity_8, entity_3, 51*sizeof(char));
}