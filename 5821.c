void fun()
{
  char entity_8[62] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'r', 62-1);
  entity_8[62-1]='';
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  memcpy(entity_5, entity_8, 62*sizeof(char));
}