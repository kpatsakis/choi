void fun()
{
  char entity_7[92] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_5[21] = "";
  entity_5 = NULL;
  memset(entity_7, 'g', 92-1);
  entity_7[92-1]='';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  memset(entity_5, 'R', 21-1);
  entity_5[21-1]='';
  memcpy(entity_6, entity_7, 92*sizeof(char));
}