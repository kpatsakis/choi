void fun()
{
  char entity_6[62] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  memset(entity_6, 'Y', 62-1);
  entity_6[62-1]='';
  memcpy(entity_2, entity_6, 62*sizeof(char));
}