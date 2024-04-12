void fun()
{
  char* entity_3;
  char entity_5[47] = "";
  entity_5 = NULL;
  char entity_6 = 'x';
  char entity_1[99] = "";
  entity_1 = NULL;
  char entity_0[83] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  memset(entity_0, 'Y', 83-1);
  entity_0[83-1]='';
  memset(entity_5, 'r', 47-1);
  entity_5[47-1]='';
  memset(entity_1, 'O', 99-1);
  entity_1[99-1]='';
  memcpy(entity_3, entity_0, 83*sizeof(char));
}