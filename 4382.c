void fun()
{
  char* entity_4;
  char entity_8[68] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', 68-1);
  entity_8[68-1]='';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  memcpy(entity_4, entity_8, 68*sizeof(char));
}