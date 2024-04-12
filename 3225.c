void fun()
{
  int entity_2 = 91;
  int entity_9 = 47;
  entity_2 = 74;
  char* entity_7;
  char entity_4[96] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  memset(entity_4, 'h', 96-1);
  entity_4[96-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memcpy(entity_7, entity_4, 96*sizeof(char));
}