void fun()
{
  char* entity_3;
  char entity_4[89] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', 89-1);
  entity_4[89-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  memcpy(entity_3, entity_4, 89*sizeof(char));
}