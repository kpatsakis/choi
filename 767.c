void fun()
{
  char entity_4[52] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_3 = 'C';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memset(entity_4, 'h', 52-1);
  entity_4[52-1]='';
  memcpy(entity_5, entity_4, 52*sizeof(char));
}