void fun()
{
  char entity_5[82] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memset(entity_7, 'e', 39-1);
  entity_7[39-1]='';
  memset(entity_5, 'E', 82-1);
  entity_5[82-1]='';
  memcpy(entity_1, entity_5, 82*sizeof(char));
}