void fun()
{
  char entity_3[71] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_8 = 'S';
  char* entity_7;
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  memset(entity_3, 'c', 71-1);
  entity_3[71-1]='';
  memcpy(entity_7, entity_3, 71*sizeof(char));
}