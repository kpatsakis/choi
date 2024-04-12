void fun()
{
  char entity_1 = 'G';
  char* entity_7;
  char entity_3[47] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'o', 47-1);
  entity_3[47-1]='';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memcpy(entity_5, entity_3, 47*sizeof(char));
}