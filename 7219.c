void fun()
{
  int entity_8 = 61;
  char entity_6[57] = "";
  entity_6 = NULL;
  char* entity_9;
  char* entity_3;
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[79-1]='';
  memset(entity_6, 't', 57-1);
  entity_6[57-1]='';
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memcpy(entity_9, entity_6, 57*sizeof(char));
}