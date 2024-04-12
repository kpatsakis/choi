void fun()
{
  char* entity_6;
  char entity_9 = 'W';
  char* entity_4;
  char* entity_1;
  char entity_3[60] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  memset(entity_3, 'Z', 60-1);
  entity_3[60-1]='';
  memcpy(entity_1, entity_3, 60*sizeof(char));
}