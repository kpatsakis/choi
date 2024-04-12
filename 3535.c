void fun()
{
  char* entity_8;
  char entity_7[71] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[21-1]='';
  memset(entity_7, 'Q', 71-1);
  entity_7[71-1]='';
  memcpy(entity_8, entity_7, 71*sizeof(char));
}