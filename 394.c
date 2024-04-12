void fun()
{
  char* entity_3;
  char entity_6[76] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_1 = 'L';
  memset(entity_6, 'O', 76-1);
  entity_6[76-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  entity_4 = (char*)malloc(2*sizeof(char));
  entity_4[2-1]='';
  memcpy(entity_3, entity_6, 76*sizeof(char));
}