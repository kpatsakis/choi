void fun()
{
  int entity_4 = 59;
  char entity_9[59] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_8[60] = "";
  entity_8 = NULL;
  char entity_2[66] = "";
  entity_2 = NULL;
  memset(entity_9, 'O', 59-1);
  entity_9[59-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_8, 'h', 60-1);
  entity_8[60-1]='';
  memset(entity_2, 'v', 66-1);
  entity_2[66-1]='';
  memcpy(entity_7, entity_8, 60*sizeof(char));
}